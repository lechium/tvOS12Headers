//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray;

@interface TVSettingsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (void).cxx_destruct;	// IMP=0x000000010004609c
- (id)_localeFormatter;	// IMP=0x0000000100045fb8
- (void)setRegion:(id)arg1;	// IMP=0x0000000100045960
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100045958
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000100045948
- (id)loadSettingGroups;	// IMP=0x00000001000450a0

@end

