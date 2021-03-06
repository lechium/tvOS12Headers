/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {

	NSString* _vfsName;
	BOOL _attached;

}

@property (nonatomic,readonly) BOOL isProtectedDatabaseAttached;              //@synthesize attached=_attached - In the implementation block
-(BOOL)isProtectedDatabaseAttached;
-(int)attachProtectedDatabase;
-(int)detachProtectedDatabase;
-(const char*)_vfsModuleName;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)close;
@end

