/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ManagedEventInfoProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)internalStateDictionary;
+(id)sharedInstance;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
@end

