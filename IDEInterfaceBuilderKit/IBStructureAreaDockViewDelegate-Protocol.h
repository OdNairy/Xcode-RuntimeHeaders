//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDraggedImageState, IBStructureAreaDockView, NSArray, NSDictionary, NSEvent, NSImage, NSString;

@protocol IBStructureAreaDockViewDelegate <NSObject>
- (void)dockViewPerformPaste:(IBStructureAreaDockView *)arg1;
- (BOOL)dockViewCanPaste:(IBStructureAreaDockView *)arg1;
- (void)dockView:(IBStructureAreaDockView *)arg1 duplicateRepresentedObjects:(NSDictionary *)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 canDuplicateRepresentedObjects:(NSDictionary *)arg2;
- (void)dockView:(IBStructureAreaDockView *)arg1 cutRepresentedObjects:(NSDictionary *)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 canCutRepresentedObjects:(NSDictionary *)arg2;
- (void)dockView:(IBStructureAreaDockView *)arg1 copyRepresentedObjects:(NSDictionary *)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 canCopyRepresentedObjects:(NSDictionary *)arg2;
- (void)dockView:(IBStructureAreaDockView *)arg1 deleteRepresentedObjects:(NSDictionary *)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 canDeleteRepresentedObjects:(NSDictionary *)arg2;
- (DVTDraggedImageState *)dockView:(IBStructureAreaDockView *)arg1 draggedImageState:(id <NSDraggingInfo>)arg2;
- (void)dockView:(IBStructureAreaDockView *)arg1 draggingEnded:(id <NSDraggingInfo>)arg2;
- (void)dockView:(IBStructureAreaDockView *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (void)dockView:(IBStructureAreaDockView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 prepareForDragOperation:(id <NSDraggingInfo>)arg2;
- (unsigned long long)dockView:(IBStructureAreaDockView *)arg1 draggingUpdated:(id <NSDraggingInfo>)arg2;
- (unsigned long long)dockView:(IBStructureAreaDockView *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;
- (id)dockView:(IBStructureAreaDockView *)arg1 dragIdentifierForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (void)userDidChangeSelectionFromOverflowMenuForDockView:(IBStructureAreaDockView *)arg1;
- (void)dockView:(IBStructureAreaDockView *)arg1 representedObjectWasSelectedFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 shouldSelectObjectFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (void)dockView:(IBStructureAreaDockView *)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasDraggedWithMouseDown:(NSEvent *)arg4 mouseDragged:(NSEvent *)arg5;
- (void)dockView:(IBStructureAreaDockView *)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasClickedWithInitialEvent:(NSEvent *)arg4;
- (void)dockView:(IBStructureAreaDockView *)arg1 userDidChangeSelectionWithEvent:(NSEvent *)arg2;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 shouldSelectObject:(id)arg2 inGroup:(id)arg3 withEvent:(NSEvent *)arg4;
- (long long)dockView:(IBStructureAreaDockView *)arg1 minimumNumberOfItemsInGroup:(id)arg2;
- (NSImage *)dockView:(IBStructureAreaDockView *)arg1 imageForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(IBStructureAreaDockView *)arg1 isShowingOpenIndicatorForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (NSString *)dockView:(IBStructureAreaDockView *)arg1 titleForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (NSArray *)dockView:(IBStructureAreaDockView *)arg1 representedObjectsForGroup:(id)arg2;
- (NSArray *)dockViewRepresentedGroups:(IBStructureAreaDockView *)arg1;
- (void)dockViewWillValidateData:(IBStructureAreaDockView *)arg1;

@optional
- (void)dockView:(IBStructureAreaDockView *)arg1 didReceiveMouseDownInBackground:(NSEvent *)arg2;
@end

