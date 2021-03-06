/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DAOofParams.h>

@protocol DAOofResponseDelegate;
@class NSString;

@interface DAOofSettingsInfo : DAOofParams {

	NSString* _requestID;
	id<DAOofResponseDelegate> _consumer;

}

@property (nonatomic,retain) NSString * requestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic,__weak) id<DAOofResponseDelegate> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id<DAOofResponseDelegate>)consumer;
-(void)setConsumer:(id<DAOofResponseDelegate>)arg1 ;
@end

