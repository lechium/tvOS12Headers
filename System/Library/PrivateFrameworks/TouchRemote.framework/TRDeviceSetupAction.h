/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TRDeviceSetupAction : NSObject {

	NSString* _actionType;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion; 
+(id)actionWithData:(id)arg1 error:(id*)arg2 supportsLegacy:(BOOL)arg3 ;
+(id)actionWithActionType:(id)arg1 parameters:(id)arg2 ;
-(unsigned long long)protocolVersion;
-(NSString *)actionType;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)propertyListRepresentation;
-(id)_initWithActionType:(id)arg1 parameters:(id)arg2 ;
-(id)init;
-(id)description;
-(NSDictionary *)parameters;
@end

