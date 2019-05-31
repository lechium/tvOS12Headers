/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFMailboxUid, NSMutableData;

@interface MFDbJournal : NSObject {

	NSString* _path;
	MFMailboxUid* _mailbox;
	opaque_pthread_mutex_t _lock;
	NSMutableData* _buffer;
	int _fd;

}
+(BOOL)mergeWithLibrary:(id)arg1 ;
+(id)journalForMailbox:(id)arg1 ;
+(id)legacyJournal;
+(void)initialize;
-(id)initWithMailbox:(id)arg1 ;
-(BOOL)mergeWithLibrary:(id)arg1 ;
-(BOOL)_markMailboxForReconciliation:(BOOL)arg1 db:(sqlite3Ref)arg2 ;
-(void)_resetBuffer;
-(BOOL)_processJournalFile:(id)arg1 db:(sqlite3Ref)arg2 ;
-(BOOL)flush:(sqlite3Ref)arg1 ;
-(BOOL)append:(const char*)arg1 ;
-(void)dealloc;
-(void)clear;
@end
