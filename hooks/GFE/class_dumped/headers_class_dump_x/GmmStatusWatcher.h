/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GmmStatusNotificationDelegate-Protocol.h"

@class GmmStatusBar, NSDate, NSDateFormatter, NSMutableArray, NSTimer;

@interface GmmStatusWatcher : _ABAddressBookAddRecord <GmmStatusNotificationDelegate>
{
    struct UIAListener *emailDBListener;
    struct UIAListener *calDBListener;
    struct UIAListener *sessionDBListener;
    GmmStatusBar *_statusBar;
    NSMutableArray *statusQueue;
    unsigned int newMessagesInTheRow;
    NSDate *m_dateLastUpdated;
    NSDate *_lastSendReceive;
    BOOL m_bSendReceiveInProgress;
    BOOL m_sendReceiveNowSilentMode;
    NSTimer *m_tmrEmailCheck;
    BOOL m_bSyncUpdateReceived;
    BOOL _sendingAfterDelay;
    id <GmmStatusWatcherDelegate> delegate;
    NSDateFormatter *m_dateFormatter;
}

- (id)statusBar;
- (void)setTmrEmailCheck:(id)fp8;
- (id)tmrEmailCheck;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)makeNoise;
- (BOOL)emailRead:(unsigned short)fp8;
- (id)senderAndSubjectFromRecord:(unsigned short)fp8;
- (void)handleDominoPasswordStatusChanged:(BOOL)fp8;
- (void)dissmissAttentionRequiredIfThereNoEncryptedMessages;
- (void)showAttentionRequiredIfNecessary;
- (void)addAttentionRequiredNotificationToQueue;
- (BOOL)isUnlimitedNotificationShown:(int)fp8;
- (void)reloadAttentionRequiredNotification;
- (void)removeUnlimitedNotification:(int)fp8;
- (void)handleEmailDBMessage:(id)fp8;
- (void)handleCalendarDBMessage:(id)fp8;
- (void)dismissUnlimitedNotification;
- (void)handleSessionDBMessage:(id)fp8;
- (void)notifyConnecting;
- (void)notifyNotConnected;
- (void)notifyConnected;
- (void)setEmailCheckTimer;
- (void)checkEmailCallback:(id)fp8;
- (void)updateDelegate;
- (void)setLastUpdated;
- (void)updateUnreadCount;
- (id)getLastUpdateString;
- (id)getLastUpdate;
- (void)updateClientID;
- (void)sendReceiveNowWithSilentMode;
- (void)sendReceiveNow;
- (void)cancelSendReceive;
- (BOOL)isReadyToSendReceive;
- (void)handleMaxTimerExpire;
- (void)handleMinTimerExpire;
- (void)quickNotifyOfType:(int)fp8 message:(id)fp12;
- (void)popStatus;
- (void)dismissCurrentNotificationOfType:(int)fp8;
- (void)dismissCurrentNotification;
- (void)addToQueue:(id)fp8;
- (void)updateStatus;
- (void)updateStatusLabelText:(id)fp8;
- (void)stopWatching;
- (void)startWatching;
- (void)synchronizeDefaults;
- (id)init;
- (void)dealloc;

@end
