/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContext.h>

@class NSMutableArray, NSArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext {

	NSMutableArray* _containerItems;

}

@property (nonatomic,copy) NSArray * containerItems; 
@property (assign,nonatomic) long long originatorType; 
@property (assign,nonatomic) long long originatorVersion; 
-(void)setOriginatorType:(long long)arg1 ;
-(void)setOriginatorVersion:(long long)arg1 ;
-(NSArray *)containerItems;
-(void)setContainerItems:(NSArray *)arg1 ;
-(void)addContainerItem:(id)arg1 ;
-(void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(void)removeContainerItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

