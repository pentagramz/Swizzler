//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIActionSheet.h"

@class NSDictionary, NSURL;

@interface SBActionSheet : UIActionSheet
{
    NSURL *url;
    NSDictionary *params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)addApplicationsButtonsForServiceWithName:(id)arg1;
- (void)dealloc;

@end
