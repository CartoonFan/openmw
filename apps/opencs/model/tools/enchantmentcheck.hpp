#ifndef CSM_TOOLS_ENCHANTMENTCHECK_H
#define CSM_TOOLS_ENCHANTMENTCHECK_H

#include <components/esm/loadench.hpp>

#include "../world/idcollection.hpp"

#include "../doc/stage.hpp"

namespace CSMTools
{
    /// \brief Make sure that enchantment records are correct
    class EnchantmentCheckStage : public CSMDoc::Stage
    {
            const CSMWorld::IdCollection<ESM::Enchantment>& mEnchantments;
            bool mIgnoreBaseRecords;

        public:

            EnchantmentCheckStage (const CSMWorld::IdCollection<ESM::Enchantment>& enchantments);

            virtual int setup();
            ///< \return number of steps

            virtual void perform (int stage, CSMDoc::Messages& messages);
            ///< Messages resulting from this tage will be appended to \a messages.
    };
}

#endif
