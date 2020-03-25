
Microsecond Arduino Due Code and Schematics accompanying the paper presented in IEEE VR 2020 "Measuring System Visual Latency through Cognitive Latency on Video See-Through AR devices" [1]

The clock starts from zero and continues to displayelapsed time since the device was powered on. The LED turn-on andturn-off time is sub-microsecond [2], therefore we know that ourclock is sufficient for at least 0.1 millisecond measurements as theLEDs turn on and off faster than we are updating the digit segments.

This clock can be then visualized through an external observer [3] using high refresh cameras.

[1] Gruen, R., Ofek, E., Steed, A., Gal, R., Sinclair, M., & Gonzalez-Franco, M. (2020) Measuring System Visual Latency through Cognitive Latency on Video See-Through AR devices. IEEE VR 2020
[2] Lee,T. P. (1975) Effect of junction capacitance on the rise time of led’s and onthe turn-on delay of injection lasers. The Bell System Technical Journal,54(1):53–68, Jan 1975.
[3] Wu, W., Dong, Y., & Hoover, A. (2013). Measuring digital system latency from sensing to actuation at continuous 1-ms resolution. Presence: Teleoperators and Virtual Environments, 22(1), 20-35.


![alt text](Clock.png)

# Contributing

This project welcomes contributions and suggestions.  Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.opensource.microsoft.com.

When you submit a pull request, a CLA bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., status check, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.
