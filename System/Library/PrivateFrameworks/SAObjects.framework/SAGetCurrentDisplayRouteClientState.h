/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SACurrentDisplayRouteClientState, NSString, NSArray;

@interface SAGetCurrentDisplayRouteClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SACurrentDisplayRouteClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)getCurrentDisplayRouteClientState;
+(id)getCurrentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SACurrentDisplayRouteClientState *)clientState;
-(void)setClientState:(SACurrentDisplayRouteClientState *)arg1 ;
@end

