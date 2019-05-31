/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, NSData;

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest {

	/*^block*/id _serializedResultsCallback;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;

}

@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                      //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSData * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,copy) id serializedResultsCallback;                 //@synthesize serializedResultsCallback=_serializedResultsCallback - In the implementation block
-(BOOL)allowsAnonymousAccount;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(NSString *)functionName;
-(NSData *)serializedParameters;
-(id)serializedResultsCallback;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 ;
-(void)setSerializedResultsCallback:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(int)operationType;
-(NSString *)serviceName;
@end
