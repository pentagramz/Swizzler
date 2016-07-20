/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class DataSourceCache, NSMutableArray;

@interface FilteredCache : _ABAddressBookAddRecord
{
    DataSourceCache *_dataSourceCache;
    id <FilteredCacheFilter> _filter;
    NSMutableArray *_cache;
    id <FilteredCacheDelegate> _delegate;
}

- (id)delegate;
- (void)setCache:(id)fp8;
- (id)cache;
- (void)setFilter:(id)fp8;
- (id)filter;
- (void)unregisterDataSourceCache;
- (void)updateFilteredCacheWithBlock:(id)fp(null);
- (void)replaceIndexSet:(id)fp8 mainCache:(id)fp12;
- (void)insertIndexSet:(id)fp8 mainCache:(id)fp12;
- (void)deleteIndexSet:(id)fp8 mainCache:(id)fp12 objectsToDelete:(id)fp16 useUpdateBlock:(BOOL)fp20;
- (void)deleteIndexSet:(id)fp8 mainCache:(id)fp12;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (BOOL)shouldRemoveEmptySections;
- (void)deleteCacheObjects:(id)fp8;
- (id)replaceCacheObject:(id)fp8;
- (void)insertCacheObject:(id)fp8;
- (id)replaceCacheObjects:(id)fp8;
- (id)insertCacheObjects:(id)fp8;
- (void)setDelegate:(id)fp8;
- (BOOL)shouldReorderObjects;
- (BOOL)shouldReEvaluateObjects;
- (int)totalCount;
- (int)logicalIndexOfObject:(id)fp8;
- (id)previousObjectBefore:(id)fp8;
- (id)nextObjectAfter:(id)fp8;
- (id)lastObject;
- (id)firstObject;
- (id)itemAtIndexPath:(id)fp8;
- (id)indexPathOfObject:(id)fp8;
- (id)indexPathsOfObjects:(id)fp8;
- (id)allIndexPathsOfObject:(id)fp8;
- (void)filterCache:(id)fp8;
- (id)initWithFilter:(id)fp8 dataSourceCache:(id)fp12 delegate:(id)fp16;
- (void)dealloc;

@end
