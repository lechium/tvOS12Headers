/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest {

	long long _connectionType;

}
+(id)requestWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(double)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 ;
-(BOOL)isConcurrent;
@end

