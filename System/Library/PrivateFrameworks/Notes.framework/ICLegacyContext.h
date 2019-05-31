/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLegacyContext
@required
+(id)newLegacyContext;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;
-(void)reset;
-(void)performBlock:(/*^block*/id)arg1;
-(void)performBlockAndWait:(/*^block*/id)arg1;
-(id)managedObjectContext;

@end

