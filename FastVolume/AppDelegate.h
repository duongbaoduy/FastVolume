//
//  AppDelegate.h
//  FastVolume
//
//  Created by Andrey Fedorov on 03.04.14.
//  Copyright (c) 2014 Andrey Fedorov. All rights reserved.
//

// Application uses icon from
// http://findicons.com/icon/203084/audio_volume_low_oldschool

#if TARGET_IPHONE_SIMULATOR
#warning Compile for device, not simulator!
#endif


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
