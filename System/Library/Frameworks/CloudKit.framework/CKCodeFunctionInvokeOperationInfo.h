/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSString, NSData;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo {

	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;

}

@property (nonatomic,copy) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSData * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(NSString *)functionName;
-(NSData *)serializedParameters;
-(void)setServiceName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceName;
@end

