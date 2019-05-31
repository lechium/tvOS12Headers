/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBScoreboardCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBSportsTeam, NSData;


@protocol _SFPBScoreboardCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) _SFPBSportsTeam * team1; 
@property (nonatomic,retain) _SFPBSportsTeam * team2; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSString * eventStatus; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(_SFPBSportsTeam *)team1;
-(_SFPBSportsTeam *)team2;
-(NSString *)accessibilityDescription;
-(NSString *)eventStatus;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setAccessibilityDescription:(id)arg1;
-(void)setTeam1:(id)arg1;
-(void)setTeam2:(id)arg1;
-(void)setEventStatus:(id)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setBackgroundColor:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(NSString *)type;
-(void)setType:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBSportsTeam, NSData;

@interface _SFPBScoreboardCardSection : PBCodable <_SFPBScoreboardCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	_SFPBSportsTeam* _team1;
	_SFPBSportsTeam* _team2;
	NSString* _accessibilityDescription;
	NSString* _eventStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) _SFPBSportsTeam * team1;                         //@synthesize team1=_team1 - In the implementation block
@property (nonatomic,retain) _SFPBSportsTeam * team2;                         //@synthesize team2=_team2 - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;               //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * eventStatus;                            //@synthesize eventStatus=_eventStatus - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(_SFPBSportsTeam *)team1;
-(_SFPBSportsTeam *)team2;
-(NSString *)accessibilityDescription;
-(NSString *)eventStatus;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(void)setTeam1:(_SFPBSportsTeam *)arg1 ;
-(void)setTeam2:(_SFPBSportsTeam *)arg1 ;
-(void)setEventStatus:(NSString *)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

