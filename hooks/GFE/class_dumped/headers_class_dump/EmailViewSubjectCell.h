//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class EmailAttachmentButton, UIImageView, UILabel, UITextView, UIView;

@interface EmailViewSubjectCell : UITableViewCell
{
    UITextView *_labelSubject;
    UITextView *_labelDate;
    EmailAttachmentButton *_buttonAttachment;
    UIImageView *_imageViewUnreadFlag;
    UILabel *_labelError;
    UIView *_viewSeparator;
}

@property(retain, nonatomic) UIImageView *imageViewUnreadFlag; // @synthesize imageViewUnreadFlag=_imageViewUnreadFlag;
@property(retain, nonatomic) UILabel *labelError; // @synthesize labelError=_labelError;
@property(retain, nonatomic) EmailAttachmentButton *buttonAttachment; // @synthesize buttonAttachment=_buttonAttachment;
@property(retain, nonatomic) UITextView *labelDate; // @synthesize labelDate=_labelDate;
@property(retain, nonatomic) UITextView *labelSubject; // @synthesize labelSubject=_labelSubject;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidLoad;

@end

