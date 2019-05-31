/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet {

	NSMutableSet* _mutableKeys;

}

@property (nonatomic,retain) NSMutableSet * mutableKeys;              //@synthesize mutableKeys=_mutableKeys - In the implementation block
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)unionBagKeySet:(id)arg1 ;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableKeys;
-(id)init;
-(id)keys;
@end

