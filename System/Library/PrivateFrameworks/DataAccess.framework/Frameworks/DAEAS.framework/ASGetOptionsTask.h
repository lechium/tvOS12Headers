/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask {

	NSArray* _versionArray;
	NSArray* _commandArray;

}
+(void)__setUsePort:(BOOL)arg1 ;
-(id)httpMethod;
-(void)finishWithError:(id)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(id)_url;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(void)setVersionArray:(id)arg1 ;
-(void)setCommandArray:(id)arg1 ;
-(id)commandArray;
-(id)versionArray;
@end

