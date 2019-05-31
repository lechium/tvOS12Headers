/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFGroupedItemDiff;

@interface HFItemManagerDelegateUpdateRequest : NSObject {

	BOOL _initialUpdate;
	BOOL _debug_wasPerformed;
	HFGroupedItemDiff* _changes;
	/*^block*/id _applyChangesBlock;
	/*^block*/id _issueDelegateMessagesBlock;

}

@property (nonatomic,copy,readonly) id applyChangesBlock;                              //@synthesize applyChangesBlock=_applyChangesBlock - In the implementation block
@property (nonatomic,copy,readonly) id issueDelegateMessagesBlock;                     //@synthesize issueDelegateMessagesBlock=_issueDelegateMessagesBlock - In the implementation block
@property (nonatomic,readonly) BOOL debug_wasPerformed;                                //@synthesize debug_wasPerformed=_debug_wasPerformed - In the implementation block
@property (nonatomic,readonly) HFGroupedItemDiff * changes;                            //@synthesize changes=_changes - In the implementation block
@property (getter=isInitialUpdate,nonatomic,readonly) BOOL initialUpdate;              //@synthesize initialUpdate=_initialUpdate - In the implementation block
-(HFGroupedItemDiff *)changes;
-(id)initWithChanges:(id)arg1 isInitialUpdate:(BOOL)arg2 applyChangesBlock:(/*^block*/id)arg3 issueDelegateMessagesBlock:(/*^block*/id)arg4 ;
-(id)applyChangesBlock;
-(id)issueDelegateMessagesBlock;
-(BOOL)isInitialUpdate;
-(void)performWithOptions:(unsigned long long)arg1 ;
-(BOOL)debug_wasPerformed;
-(id)init;
-(id)description;
@end
