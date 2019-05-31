/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/NoteCollectionObject.h>

@class NSDictionary, NSNumber, NSString, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {

	NSDictionary* _constraints;
	NSNumber* _preventMovingNotesToOtherAccounts;

}

@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) NSString * constraintsPath; 
@property (nonatomic,retain) NSDictionary * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier; 
@property (nonatomic,retain) NSSet * stores; 
@property (nonatomic,retain) NoteStoreObject * defaultStore; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int accountType; 
@property (nonatomic,retain) NSString * pathToConstraintsPlist; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (nonatomic,readonly) BOOL preventMovingNotesToOtherAccounts; 
-(void)willSave;
-(void)didTurnIntoFault;
-(id)collectionInfo;
-(id)predicateForNotes;
-(BOOL)shouldMarkNotesAsDeleted;
-(id)storeForExternalId:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(BOOL)preventMovingNotesToOtherAccounts;
-(void)setPathToConstraintsPlist:(NSString *)arg1 ;
-(NSString *)pathToConstraintsPlist;
-(BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2 ;
-(int)accountType;
-(void)setAccountType:(int)arg1 ;
-(NSDictionary *)constraints;
-(void)setConstraints:(NSDictionary *)arg1 ;
@end

