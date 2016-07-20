/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class AppointmentWrapper;

@interface KLAppointmentAvailabilityCellView : _ABAddressBookAddRecord
{
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
    int choice;
    int row;
    BOOL highlighted;
}

- (void)setRow:(int)fp8;
- (int)row;
- (void)setChoice:(int)fp8;
- (int)choice;
- (void)setAppWrapperTmp:(id)fp8;
- (id)appWrapperTmp;
- (void)setAppWrapper:(id)fp8;
- (id)appWrapper;
- (BOOL)isHighlighted;
- (BOOL)isSelectedCell;
- (id)imageNameForRowWithNumber:(int)fp8;
- (id)textForRowWithNumber:(int)fp8;
- (void)dealloc;
- (void)drawRect:(struct CGRect)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
