/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNMaskingTableView.h>

@class UIView, CNContact, UIColor, NSDictionary, CNContactHeaderView;

@interface CNContactView : CNMaskingTableView {

	BOOL _cellsLayoutCachingEnabled;
	BOOL _shouldUseExpandedContentStyle;
	BOOL _shouldUseMapTiles;
	BOOL _needsUpdateVisibleCells;
	UIView* _customHeaderView;
	CNContact* _contact;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	NSDictionary* _labelTextAttributes;
	NSDictionary* _valueTextAttributes;
	NSDictionary* _actionTextAttributes;
	CGSize _oldSize;
	UIEdgeInsets _contentMargins;

}

@property (nonatomic,retain) CNContact * contact;                                                            //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) CGSize oldSize;                                                                 //@synthesize oldSize=_oldSize - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateVisibleCells;                                                   //@synthesize needsUpdateVisibleCells=_needsUpdateVisibleCells - In the implementation block
@property (nonatomic,retain) UIView * customHeaderView;                                                      //@synthesize customHeaderView=_customHeaderView - In the implementation block
@property (nonatomic,readonly) CNContactHeaderView * defaultHeaderView; 
@property (assign,nonatomic,__weak) id<ABContactViewDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<ABContactViewDelegate> delegate; 
@property (assign,getter=isCellsLayoutCachingEnabled,nonatomic) BOOL cellsLayoutCachingEnabled;              //@synthesize cellsLayoutCachingEnabled=_cellsLayoutCachingEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldUseExpandedContentStyle;                                             //@synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMapTiles;                                                         //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) UIColor * separatorColor; 
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                                               //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;                                          //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                                               //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * valueTextAttributes;                                               //@synthesize valueTextAttributes=_valueTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * actionTextAttributes;                                              //@synthesize actionTextAttributes=_actionTextAttributes - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargins;                                                    //@synthesize contentMargins=_contentMargins - In the implementation block
+(BOOL)isMultiValueProperty:(id)arg1 ;
+(BOOL)isFixedValueProperty:(id)arg1 ;
+(id)requiredNameProperties;
+(id)nameProperties;
+(id)cellIdentifierForClass:(Class)arg1 ;
+(id)namePropertiesForContact:(id)arg1 ;
+(id)cellIdentifierForActions;
+(id)cellIdentifierForSplitActions;
+(id)cellIdentifierForPropertyPlaceholder;
+(id)cellIdentifierForFaceTimeGroup;
+(id)cellIdentifierForLinkedCardsGroup;
+(id)cellIdentifierForLinkedCardsEditingGroup;
+(id)cellIdentifierForLinkedCardsPlaceholderGroup;
+(id)cellIdentifierForProperty:(id)arg1 ;
+(id)cellIdentifierForEditingProperty:(id)arg1 ;
+(Class)classForCellIdentifier:(id)arg1 ;
+(id)allCardProperties;
+(id)defaultCardProperties;
+(id)optionalCardProperties;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(void)_cnui_applyContactStyle;
-(BOOL)shouldUseExpandedContentStyle;
-(void)setShouldUseExpandedContentStyle:(BOOL)arg1 ;
-(void)updateFontSizes;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentMargins;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(void)setActionTextAttributes:(NSDictionary *)arg1 ;
-(void)updateFontColors;
-(void)registerContactCellClass:(Class)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 contact:(id)arg3 ;
-(UIColor *)sectionBackgroundColor;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectedCellBackgroundColor;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(NSDictionary *)actionTextAttributes;
-(CNContactHeaderView *)defaultHeaderView;
-(void)setNeedsUpdateVisibleCells;
-(CGSize)oldSize;
-(void)setOldSize:(CGSize)arg1 ;
-(void)updateVisibleCellsIfNeeded;
-(void)applyCellAppearance:(id)arg1 ;
-(BOOL)shouldUseMapTiles;
-(id)initWithFrame:(CGRect)arg1 contact:(id)arg2 ;
-(void)setAttributesFromContactView:(id)arg1 ;
-(BOOL)isCellsLayoutCachingEnabled;
-(void)setCellsLayoutCachingEnabled:(BOOL)arg1 ;
-(BOOL)needsUpdateVisibleCells;
-(void)setNeedsUpdateVisibleCells:(BOOL)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)layoutMarginsDidChange;
-(UIView *)customHeaderView;
-(void)setCustomHeaderView:(UIView *)arg1 ;
@end

