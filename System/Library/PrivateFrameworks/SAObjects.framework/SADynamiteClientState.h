/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SACalendar, NSString, NSNumber;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>

@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSNumber * userHistoryUnmodifiable; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,copy) NSString * xpAbCookie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(SACalendar *)expirationDate;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)userHistoryUnmodifiable;
-(void)setUserHistoryUnmodifiable:(NSNumber *)arg1 ;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)userToken;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
@end
