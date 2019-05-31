/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIAccessibilityElementTraversalOptions : NSObject {

	BOOL _shouldReturnScannerGroups;
	BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
	BOOL _shouldIncludeKeyboardObscuredElements;
	BOOL _shouldUseAllSubviews;
	BOOL _includeHiddenViews;
	BOOL _includeWindowlessViews;
	BOOL _sorted;
	BOOL _ignoreObscuresScreen;
	BOOL _includeDirectDescendantsOnly;
	BOOL _includeAncestorsOfSelfInSiblingMatch;
	BOOL _forSpeakScreen;
	BOOL _shouldIncludeStatusBarWindow;
	long long _direction;
	/*^block*/id _leafNodePredicate;

}

@property (assign,nonatomic) BOOL forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatusBarWindow;                           //@synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) long long direction;                                         //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeKeyboardObscuredElements;                  //@synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) BOOL includeWindowlessViews;                                 //@synthesize includeWindowlessViews=_includeWindowlessViews - In the implementation block
@property (assign,nonatomic) BOOL sorted;                                                 //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) BOOL ignoreObscuresScreen;                                   //@synthesize ignoreObscuresScreen=_ignoreObscuresScreen - In the implementation block
@property (assign,nonatomic) BOOL includeDirectDescendantsOnly;                           //@synthesize includeDirectDescendantsOnly=_includeDirectDescendantsOnly - In the implementation block
@property (assign,nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch;                   //@synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch - In the implementation block
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1 ;
+(id)defaultSpeakScreenOptions;
+(id)defaultVoiceOverOptions;
+(id)defaultSwitchControlOptions;
+(id)options;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(BOOL)arg1 ;
-(void)setShouldIncludeStatusBarWindow:(BOOL)arg1 ;
-(void)setForSpeakScreen:(BOOL)arg1 ;
-(BOOL)shouldOnlyIncludeElementsWithVisibleFrame;
-(BOOL)shouldReturnScannerGroups;
-(BOOL)forSpeakScreen;
-(BOOL)shouldUseAllSubviews;
-(BOOL)includeHiddenViews;
-(BOOL)includeWindowlessViews;
-(void)setIncludeWindowlessViews:(BOOL)arg1 ;
-(BOOL)sorted;
-(BOOL)ignoreObscuresScreen;
-(BOOL)includeDirectDescendantsOnly;
-(void)setIncludeDirectDescendantsOnly:(BOOL)arg1 ;
-(BOOL)includeAncestorsOfSelfInSiblingMatch;
-(void)setIncludeAncestorsOfSelfInSiblingMatch:(BOOL)arg1 ;
-(BOOL)shouldIncludeStatusBarWindow;
-(void)setLeafNodePredicate:(id)arg1 ;
-(id)leafNodePredicate;
-(void)setSorted:(BOOL)arg1 ;
-(void)setShouldUseAllSubviews:(BOOL)arg1 ;
-(void)setShouldReturnScannerGroups:(BOOL)arg1 ;
-(BOOL)shouldIncludeKeyboardObscuredElements;
-(void)setShouldIncludeKeyboardObscuredElements:(BOOL)arg1 ;
-(void)setIncludeHiddenViews:(BOOL)arg1 ;
-(void)setIgnoreObscuresScreen:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
@end

