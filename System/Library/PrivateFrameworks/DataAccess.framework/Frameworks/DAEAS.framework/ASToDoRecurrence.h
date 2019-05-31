/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASRecurrence.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSSecureCoding> {

	NSDate* _startTime;
	NSNumber* _regenerate;
	NSNumber* _deadOccur;
	ASToDo* _parentToDo;

}

@property (assign,nonatomic,__weak) ASToDo * parentToDo;              //@synthesize parentToDo=_parentToDo - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSNumber * regenerate;                   //@synthesize regenerate=_regenerate - In the implementation block
@property (nonatomic,retain) NSNumber * deadOccur;                    //@synthesize deadOccur=_deadOccur - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(BOOL)supportsSecureCoding;
-(NSNumber *)regenerate;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)initWithCalRecurrence:(void*)arg1 parentToDo:(id)arg2 ;
-(void)setDeadOccur:(NSNumber *)arg1 ;
-(void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(void)setParentToDo:(ASToDo *)arg1 ;
-(void)setUntilString:(id)arg1 ;
-(void)setStartTimeString:(id)arg1 ;
-(void)setRegenerate:(NSNumber *)arg1 ;
-(ASToDo *)parentToDo;
-(NSNumber *)deadOccur;
-(BOOL)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
@end

