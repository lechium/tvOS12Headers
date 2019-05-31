/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHomeManager* _homeManager;
	NSMutableSet* _homeItems;

}

@property (nonatomic,retain) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * homeItems;                 //@synthesize homeItems=_homeItems - In the implementation block
@property (nonatomic,copy) id filter;                                  //@synthesize filter=_filter - In the implementation block
-(id)invalidationReasons;
-(id)reloadItems;
-(NSMutableSet *)homeItems;
-(void)setHomeItems:(NSMutableSet *)arg1 ;
-(HMHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)items;
@end
