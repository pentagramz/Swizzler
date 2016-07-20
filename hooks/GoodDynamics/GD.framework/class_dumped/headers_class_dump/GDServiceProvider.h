//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface GDServiceProvider : NSObject
{
    NSString *identifier;
    NSString *version;
    NSString *name;
    NSString *address;
    UIImage *icon;
    NSArray *serverCluster;
    NSArray *services;
}

@property(retain, nonatomic) NSArray *services; // @synthesize services;
@property(retain, nonatomic) NSArray *serverCluster; // @synthesize serverCluster;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void)dealloc;
- (id)init;

@end
