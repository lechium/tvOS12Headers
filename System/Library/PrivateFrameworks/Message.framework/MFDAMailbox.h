/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(id)_folderID;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(NSString *)folderID;
-(void)setFolderID:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
@end

