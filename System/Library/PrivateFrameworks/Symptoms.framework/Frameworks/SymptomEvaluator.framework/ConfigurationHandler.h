/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSDictionary, NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol> {

	NSDictionary* _buildInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setConfigurationObject:(id)arg1 forName:(id)arg2 ;
+(int)read:(id)arg1 returnedValues:(id)arg2 ;
+(id)objectForName:(id)arg1 ;
+(id)classRepresentativeForName:(id)arg1 ;
+(void)dumpAll;
+(int)configureItems:(id)arg1 ;
+(void)initialize;
+(id)sharedInstance;
-(int)configure:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_configureHandlerClass:(id)arg1 ;
-(id)_configureBuildDetails:(id)arg1 ;
@end

