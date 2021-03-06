//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class NSObject, NSString;

@interface GDAlertView : UIAlertView <UIAlertViewDelegate>
{
    int _alertViewID;
    id <UIAlertViewDelegate> _realDelegate;
    NSObject *_param1;
    NSObject *_param2;
}

+ (int)checkAlertViewID:(id)arg1;
@property(nonatomic) id _realDelegate; // @synthesize _realDelegate;
@property(retain, nonatomic) NSObject *_param2; // @synthesize _param2;
@property(retain, nonatomic) NSObject *_param1; // @synthesize _param1;
@property(nonatomic) int _alertViewID; // @synthesize _alertViewID;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)show;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

