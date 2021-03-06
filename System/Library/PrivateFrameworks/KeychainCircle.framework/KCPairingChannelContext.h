/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface KCPairingChannelContext : NSObject {

	NSString* _model;
	NSString* _modelVersion;
	NSString* _modelClass;
	NSString* _osVersion;

}

@property (retain) NSString * model;                     //@synthesize model=_model - In the implementation block
@property (retain) NSString * modelVersion;              //@synthesize modelVersion=_modelVersion - In the implementation block
@property (retain) NSString * modelClass;                //@synthesize modelClass=_modelClass - In the implementation block
@property (retain) NSString * osVersion;                 //@synthesize osVersion=_osVersion - In the implementation block
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)modelVersion;
-(void)setModel:(NSString *)arg1 ;
-(void)setModelClass:(NSString *)arg1 ;
-(NSString *)modelClass;
-(NSString *)model;
@end

