// GetLocalHostAddress.cpp
#include "GetLocalHostAddress.h"
#include "Modules/ModuleManager.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"

void UGetLocalHostAddressFunctionLibrary::GetLocalHostAddress(FString& OutIP, bool& Success)
{
    bool bCanBindAll;
    TSharedPtr<FInternetAddr> LocalIP = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBindAll);

    if (LocalIP.IsValid())
    {
        OutIP = LocalIP->ToString(false);
        Success = true;
    }
    else
    {
        OutIP = TEXT("Unable to get local IP");
        Success = false;
    }
}

class FGetLocalHostAddressModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        // Add any module-specific initialization here
    }

    virtual void ShutdownModule() override
    {
        // Add any module-specific shutdown code here
    }
};

IMPLEMENT_MODULE(FGetLocalHostAddressModule, GetLocalHostAddress)