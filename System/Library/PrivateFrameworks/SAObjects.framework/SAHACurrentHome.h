/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * currentHomeIdentifier; 
@property (nonatomic,copy) NSString * currentHomeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentHome;
+(id)currentHomeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)currentHomeIdentifier;
-(void)setCurrentHomeIdentifier:(NSString *)arg1 ;
-(NSString *)currentHomeName;
-(void)setCurrentHomeName:(NSString *)arg1 ;
@end

