/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (assign,nonatomic) BOOL chainResultSet; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSArray * providerCommand; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (assign,nonatomic) BOOL searchAlongRoute; 
@property (nonatomic,retain) SALocation * searchRegionCenter; 
@property (nonatomic,copy) NSNumber * userCurrentLocation; 
+(id)mapItemSnippet;
+(id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)providerCommand;
-(BOOL)chainResultSet;
-(void)setChainResultSet:(BOOL)arg1 ;
-(void)setProviderCommand:(NSArray *)arg1 ;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(BOOL)searchAlongRoute;
-(void)setSearchAlongRoute:(BOOL)arg1 ;
-(SALocation *)searchRegionCenter;
-(void)setSearchRegionCenter:(SALocation *)arg1 ;
-(NSNumber *)userCurrentLocation;
-(void)setUserCurrentLocation:(NSNumber *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end
