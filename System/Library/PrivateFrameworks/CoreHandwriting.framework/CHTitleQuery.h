/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHQuery.h>

@class NSString, NSSet;

@interface CHTitleQuery : CHQuery {

	NSString* _transcribedTitle;
	NSSet* _titleStrokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * transcribedTitle;                 //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * titleStrokeIdentifiers;              //@synthesize titleStrokeIdentifiers=_titleStrokeIdentifiers - In the implementation block
-(id)debugName;
-(void)q_updateQueryResult;
-(void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2 ;
-(BOOL)wantsHighFrequencyNotifications;
-(NSString *)transcribedTitle;
-(NSSet *)titleStrokeIdentifiers;
-(void)dealloc;
@end

