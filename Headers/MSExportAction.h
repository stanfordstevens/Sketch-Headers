//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseAction.h"

@interface MSExportAction : MSBaseAction
{
}

- (id)slices;
- (id)baseNameForSlice;
- (struct CGRect)rectForExportingEntirePage;
- (void)createInitialSlice;
- (void)showInspectorPanelIfNecessary;
- (BOOL)hasArtboardsWitNoExportFormats;
- (void)doPerformAction:(id)arg1;
- (BOOL)validate;
- (void)export:(id)arg1;

@end
