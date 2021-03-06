/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ExchangeManager : NSObject {

	NSMutableDictionary* _exchangesByName;

}
+(id)sharedManager;
-(void)saveChanges;
-(id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2 ;
-(void)_loadExchangesFromDefaults;
-(void)addExchange:(id)arg1 ;
-(id)exchangeWithName:(id)arg1 ;
-(void)_addExchange:(id)arg1 ;
-(id)exchangeList;
-(BOOL)containsExchange:(id)arg1 ;
-(void)removeExchange:(id)arg1 ;
-(void)reloadExchangesFromDefaults;
-(id)init;
@end

