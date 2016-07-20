//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

#import "NSStreamDelegate.h"

@class NSString;

@interface GDCWriteStream : NSOutputStream <NSStreamDelegate>
{
    void *m_internalWriter;
    int m_streamError;
    unsigned int m_streamStatus;
    id <NSStreamDelegate> m_delegate;
}

+ (BOOL)gdResolveMethod:(SEL)arg1 withNewSelector:(SEL)arg2;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (id)streamError;
- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)streamStatus;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)gdunscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)gdscheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)gdsetCFClientFlags:(unsigned long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_304912e7 *)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (id)initWithFile:(id)arg1 append:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
