<p align="center">
	<img src="http://www.mochicart.com/Assets/img/github/heading.png" />
</p>

What Is MochiCart?
================
[MochiCart](http://www.mochicart.com/) is the easiest way to sell physical products in your new or existing iOS apps, for free. We've developed MochiCart as a service that we ourselves as app developers wanted but could not find. Everything that you would expect from an incredible cart system has been integrated into MochiCart. We've made the integration process so easy, that it literally takes 5 minutes or less to freshly integrate a complete MochiCart store into a new app, or any of your existing apps.

Please register on [MochiCart.com](http://www.mochicart.com/) if you have not yet. Registration is free, and is required to administer your stores.

MochiCart is currently only available for iOS at this point in time. We do however have plans to develop SDKs for other popular mobile operating systems in the near future, effectively making your stores cross compatible and allowing you to reach the largest amount of potential customers possible.

The MochiCart SDK is compatible with all iOS devices.

Sample Cart
================
We've included a sample cart located in the SampleCart.zip file for your convenience. You can use this for quickly creating store apps or as a reference for how to integrate mochiCart. 

MochiCartSDK-IOS Integration Guide
================
This integration guide will cover the following:
- MochiCart SDK installation into your app.
- Different use cases and ways to integrate your MochiCart store.
- Testing your MochiCart store before publishing your app.
- SDK installation FAQs.

If this guide is confusing, you can alternatively watch a short video on how to integrate MochiCart, [here](https://www.youtube.com/watch?v=HvHqaedRatg).

##Step 1
First, download the MochiCart iOS SDK. Once you've downloaded it, open the zip file and you'll be greeted by a zipped sample project, along with the two required library files in the iOS SDK folder for integrating MochiCart - MochiCartSDK.framework and libPayPalMobile.a.

Now, open your XCode app project and expand the "Frameworks" folder in your project. Drag the MochiCartSDK.framework file and libPayPalMobile.a files into your Frameworks folder.

<p align="center">
	<img src="http://www.mochicart.com/assets/img/sdk/ios/1.png" />
    <img src="http://www.mochicart.com/assets/img/sdk/ios/2.png" />
</p>

##Step 2
Next, you need to add a few additional native frameworks to your project. To do this, navigate to the "Build Phases" section of your project. If you do not know how to do this, please reference the tutorial video above. Once there, expand the "Link Binary With Libraries" section.

It's time to add the additional native frameworks. At the bottom of the frameworks listed in the "Link Binary With Libraries" section, you will see a + (plus) and a - (minus) button. Click the + (plus) button to add a new native framework to your app. You will need to add the following frameworks from the menu that pops up: **SystemConfiguration.framework**, **MessageUI.framework**, **CoreLocation.framework** and **AVFoundation.framework**.

Note: Your project should also have **CoreGraphics.framework**, **UIKit.framework** and **Foundation.framework** added by default. If any of these three libraries are not listed under "Link Binary With Libraries" be sure to add them using the same method by pressing the + (plus) button.

Note: Make sure **MochiCartSDK.framework** and **libPayPalMobile.a** are also listed under the "Link Binary With Libraries" section. This should have happened by default when you dragged the 2 files into the "Frameworks" folder of your project. If they are not listed, add them by dragging the 2 files from the "Frameworks" folder in the project, onto the "Link Binary With Libraries" list.

<p align="center">
	<img src="http://www.mochicart.com/assets/img/sdk/ios/3.png" />
	<img src="http://www.mochicart.com/assets/img/sdk/ios/4.png" />
</p>

##Step 3
Almost there! Only a few things left to do. Now we need to add values to something called "Other Linker Flags" within your app. Navigate to the "Build Settings" section of your project. It should be a tab to the left of the "Build Phases" tab.

Once there, scroll down the list of values and find the section that is called "Linking". Expand this section if it is not already expanded, and find the setting called "Other Linker Flags". You will need to add 2 new case sensitive linker flag values here, **-ObjC** and **-lc++**. Do this by double clicking the blank area to the right of "Other Linker Flags". It will either show a text entry field, or a list with a + (plus) and - (minus) add the bottom for adding new values. Add the following case sensitive values, **-ObjC** and **-lc++**. Once added, click away from the list or text entry field, and it should show both values. Reference the picture below on the right for what you should see if these values have been added correctly.

**Note:** If you do not add the **-ObjC** and **-lc++** to the "Other Linker Flags", you will receive a large number of linker errors and your project will fail to build.

<p align="center">
	<img src="http://www.mochicart.com/assets/img/sdk/ios/5.png" />
	<img src="http://www.mochicart.com/assets/img/sdk/ios/6.png" />
</p>

##Step 4
The rest is a walk in the park. For the sake of this guide, we'll do the most basic integration steps for MochiCart by setting up your entire app project as a MochiCart store. Open your AppDelegate.m file and add the following import statement underneath the #import "AppDelegate.h" line, **#import &lt;MochiCartSDK/MochiCart.h&gt;**

Add the following line of code within the didFinishLaunchingWithOptions method before calling any other MochiCart methods, **[[MochiCart session] setupShop:@"YOUR STORE'S API KEY HERE"];**. Change the YOUR STORE'S API KEY HERE to the api key listed next to the store within "My Stores" that you'd like to display within your app.

We can now display our store anywhere within the app that can utilize a UINavigationController such as the rootViewController property or for a tab bar item. For this guide, we'll be using the self.window.rootViewController property for setting our store's UINavigationController. We do this by adding the following line of code within the didFinishLaunchingWithOptions method after MochiCart's setupShop method, **self.window.rootViewController = [[MochiCart sessions] buildStorefront];**

You're done! Run the project, if the build succeeds you've successfully integrated MochiCart!

<p align="center">
	<img src="http://www.mochicart.com/assets/img/sdk/ios/7.png" />
	<img src="http://www.mochicart.com/assets/img/sdk/ios/8.png" />
</p>