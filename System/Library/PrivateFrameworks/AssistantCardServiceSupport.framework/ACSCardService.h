/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRSCardServing.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@class NSString;

@interface ACSCardService : NSObject <CRSCardServing, CRSIdentifiedServing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)canSatisfyCardRequest:(id)arg1 ;
-(unsigned long long)servicePriorityForRequest:(id)arg1 ;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)serviceIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

