/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask {

	NSArray* _accessControlEntities;

}

@property (nonatomic,retain) NSArray * accessControlEntities;                         //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVACLTaskDelegate> delegate; 
-(NSArray *)accessControlEntities;
-(void)setAccessControlEntities:(NSArray *)arg1 ;
-(id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2 ;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 ;
@end

