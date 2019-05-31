/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@class NoteContext, NSMapTable;

@interface DALocalDBWatcher : NSObject {

	int _lastSavedCalSequenceNumber;
	int _lastSavedABSequenceNumber;
	void* _abWatcher;
	CalDatabase* _calWatcher;
	NoteContext* _noteWatcher;
	NSMapTable* _concernedABPartyToBlockMap;
	NSMapTable* _concernedCalPartyToBlockMap;
	NSMapTable* _concernedNotePartyToBlockMap;
	BOOL _watchingBookmarks;
	NSMapTable* _concernedBookmarkPartyToBlockMap;

}

@property (assign,nonatomic) int lastSavedABSequenceNumber;               //@synthesize lastSavedABSequenceNumber=_lastSavedABSequenceNumber - In the implementation block
@property (assign,nonatomic) int lastSavedCalSequenceNumber;              //@synthesize lastSavedCalSequenceNumber=_lastSavedCalSequenceNumber - In the implementation block
+(id)sharedDBWatcher;
-(int)lastSavedABSequenceNumber;
-(void)setLastSavedABSequenceNumber:(int)arg1 ;
-(int)lastSavedCalSequenceNumber;
-(void)setLastSavedCalSequenceNumber:(int)arg1 ;
-(void)noteABDBDirChanged;
-(void)noteCalDBDirChanged;
-(void)_handleCalChangeNotification;
-(void)_handleABChangeNotificationWithInfo:(id)arg1 ;
-(void)_handleBookmarkChangeNotification;
-(void)_notesChangedExternally;
-(void)registerConcernedABParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedABParty:(id)arg1 ;
-(void)registerConcernedCalParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedCalParty:(id)arg1 ;
-(void)registerConcernedBookmarkParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedBookmarkParty:(id)arg1 ;
-(void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedNoteParty:(id)arg1 ;
-(void)didReceiveDarwinNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

