/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)targetType;
-(NSString *)targetIdentifier;
-(id)actionDetails;
-(void)setActionDetails:(id)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(void)setTargetType:(NSString *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
-(NSString *)targetURL;
-(id)init;
@end
