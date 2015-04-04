//
//  FrissbeePhoneAppDelegate.h
//  FrissbeePhone
//
//  Created by mike on 8/5/11.
//  Copyright 2011 MiGuEl Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FrissbeePhoneViewController;

@interface FrissbeePhoneAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    FrissbeePhoneViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet FrissbeePhoneViewController *viewController;

@end

