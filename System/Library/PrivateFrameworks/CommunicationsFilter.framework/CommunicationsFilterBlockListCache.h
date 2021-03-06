/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;

}
-(void)removeItemFromCache:(id)arg1 ;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
-(void)_blockListChanged:(id)arg1 ;
-(void)syncListEmptyState;
-(id)init;
@end

