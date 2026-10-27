# Agile Lens GetLocalHostAddress Plugin

A single blueprint node to get the device's local IP address. The currently tested platforms/engines are listed below. I will backport or update this at some point.

![image](https://github.com/user-attachments/assets/467a7ee3-e61c-44dd-96ad-c869ae0800cb)

Agile Lens -> Networking -> Get Local Host Address

Tested:
|            | 4.27 | 5.0 | 5.1 | 5.2 | 5.3 | 5.4 | 5.5 |
|------------|------|-----|-----|-----|-----|-----|-----|
| **Windows**|   ?   |  ?   |  ?   |  ?   |  OK  |  OK   |  ?   |
| **Android**|   ?   |  ?   |  ?   |  ?   |  ?   |  OK   |  ?   |
| **iOS**    |   ?   |  ?   |  ?   |  ?   |  ?   |  ?   |  ?   |
| **Mac**    |   ?   |  ?   |  ?   |  ?   |  ?   |  ?   |  ?   |
| **Linux**  |   ?   |  ?   |  ?   |  ?   |  ?   |  ?   |  ?   |

If you use this on one of the untested platforms/engines and it works fine, please leave an issue stating which versions you used. I will update the tested grid accordingly.


## Things to Try

1. **Install:** Copy the plugin folder into `YourProject/Plugins/`, regenerate project files (right-click `.uproject` → **Generate Visual Studio project files**), and rebuild — the blueprint node appears immediately.
2. **Use in Blueprint:** Open any Blueprint graph, search **Get Local Host Address** under **Agile Lens → Networking** — drag the node into your Event Graph and connect its string return value to a **Print String** to confirm your device's LAN IP.
3. **Test on Android / Quest:** Package your project and deploy to a Quest or Android device — the node returns the device's Wi-Fi IP, useful for LAN-based session discovery without hardcoded addresses.
4. **Use for multiplayer host discovery:** Pass the returned IP as the host address in `CreateSession` / `JoinSession` calls — verify both devices can reach each other at the displayed addresses before connecting.
5. **Report a tested platform:** If you verify the plugin works on an engine version or platform marked `?` in the README's tested grid, open a [GitHub issue](https://github.com/AgileLens/GetLocalHostAddress/issues) with the UE version and platform so the grid can be updated for the community.

