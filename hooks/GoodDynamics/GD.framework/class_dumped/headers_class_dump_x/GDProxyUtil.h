/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDProxyUtil : _CATransform3DMakeScale
{
}

+ (void)setUseDefaultObjectForThread:(BOOL)fp8 with:(id *)fp12;
+ (BOOL)usingDefaultObjectForThreadWith:(id *)fp8;
+ (void)exitObjectIfRoot:(BOOL)fp8 with:(id *)fp12;
+ (BOOL)enterObjectIfRootWith:(id *)fp8;
+ (void)setUseDefaultNSBundleForThread:(BOOL)fp8;
+ (BOOL)usingDefaultNSBundleForThread;
+ (void)exitNSBundleIfRoot:(BOOL)fp8;
+ (BOOL)enterNSBundleIfRoot;
+ (void)setUseDefaultNSURLForThread:(BOOL)fp8;
+ (BOOL)usingDefaultNSURLForThread;
+ (void)exitNSURLIfRoot:(BOOL)fp8;
+ (BOOL)enterNSURLIfRoot;
+ (void)setUseDefaultFileManagerForThread:(BOOL)fp8;
+ (BOOL)usingDefaultFileManagerForThread;
+ (void)exitNSFileManagerIfRoot:(BOOL)fp8;
+ (BOOL)enterNSFileManagerIfRoot;
+ (id)currentDirectoryPath;
+ (id)absolutePathForPath:(id)fp8;
+ (BOOL)isAbsolutePath:(id)fp8;
+ (BOOL)shouldPassThrough:(id)fp8;
+ (void)analyzeClass:(Class)fp8 recursively:(BOOL)fp12;
+ (void)analyzeClass:(Class)fp8;
+ (void)analyzeClassProperties:(Class)fp8;
+ (void)analyzeClassFunctions:(Class)fp8;
+ (void)analyzeClassIvars:(Class)fp8;
+ (void)analyzeClassProtocols:(Class)fp8;
+ (void)analyzeProtocol:(id)fp8;
+ (void)analyzeIvar:(struct objc_ivar *)fp8;
+ (void)analyzeProperty:(struct objc_property *)fp8;
+ (void)analyzeMethodFromClass:(Class)fp8 BySelector:(SEL)fp12;
+ (void)analyzeMethod:(struct objc_method *)fp8;

@end
