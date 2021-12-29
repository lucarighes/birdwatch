#ifndef org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$OffsetSource;
          class OffsetsEnum;
          class UHComponents;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class FieldOffsetStrategy : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8858451d37bfc18c,
              mid_getField_db9b55ba01e03e4b,
              mid_getOffsetSource_d592a7a3fc9567b1,
              mid_getOffsetsEnum_55596ccb3f6b81ab,
              mid_createOffsetsEnumFromReader_ea3253413bb7a79d,
              mid_createOffsetsEnumsWeightMatcher_af48ca8156e21201,
              mid_createOffsetsEnumsForTerms_865446310864ce4e,
              mid_createOffsetsEnumsForAutomata_500b73666cc50f09,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldOffsetStrategy(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldOffsetStrategy(const FieldOffsetStrategy& obj) : ::java::lang::Object(obj) {}

            FieldOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &);

            ::java::lang::String getField() const;
            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::org::apache::lucene::search::uhighlight::OffsetsEnum getOffsetsEnum(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldOffsetStrategy);
          extern PyTypeObject *PY_TYPE(FieldOffsetStrategy);

          class t_FieldOffsetStrategy {
          public:
            PyObject_HEAD
            FieldOffsetStrategy object;
            static PyObject *wrap_Object(const FieldOffsetStrategy&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
