#ifndef org_apache_lucene_util_AttributeSource_H
#define org_apache_lucene_util_AttributeSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        class AttributeSource$State;
        class Attribute;
        class AttributeSource;
        class AttributeImpl;
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_a55a4d78167a7843,
            mid_addAttribute_dc1a2e28aa716826,
            mid_addAttributeImpl_26346c38ebc9c090,
            mid_captureState_e576d345b9d7fa00,
            mid_clearAttributes_f2cc1bce94666404,
            mid_cloneAttributes_8fce18d62d0e145e,
            mid_copyTo_ac4d63b3420affe2,
            mid_endAttributes_f2cc1bce94666404,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getAttribute_dc1a2e28aa716826,
            mid_getAttributeClassesIterator_233a192dadb0917d,
            mid_getAttributeFactory_e08291aca9270e76,
            mid_getAttributeImplsIterator_233a192dadb0917d,
            mid_hasAttribute_a895c7f53785ebe6,
            mid_hasAttributes_8454bd5aa23fd11e,
            mid_hashCode_9972fcc56b44e79d,
            mid_reflectAsString_46a3600c464a391e,
            mid_reflectWith_b880c72ee67200af,
            mid_removeAllAttributes_f2cc1bce94666404,
            mid_restoreState_68a3490c6111a696,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeSource(const AttributeSource& obj) : ::java::lang::Object(obj) {}

          AttributeSource();
          AttributeSource(const ::org::apache::lucene::util::AttributeFactory &);

          ::org::apache::lucene::util::Attribute addAttribute(const ::java::lang::Class &) const;
          void addAttributeImpl(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::AttributeSource$State captureState() const;
          void clearAttributes() const;
          AttributeSource cloneAttributes() const;
          void copyTo(const AttributeSource &) const;
          void endAttributes() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::Attribute getAttribute(const ::java::lang::Class &) const;
          ::java::util::Iterator getAttributeClassesIterator() const;
          ::org::apache::lucene::util::AttributeFactory getAttributeFactory() const;
          ::java::util::Iterator getAttributeImplsIterator() const;
          jboolean hasAttribute(const ::java::lang::Class &) const;
          jboolean hasAttributes() const;
          jint hashCode() const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void removeAllAttributes() const;
          void restoreState(const ::org::apache::lucene::util::AttributeSource$State &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(AttributeSource);
        extern PyTypeObject *PY_TYPE(AttributeSource);

        class t_AttributeSource {
        public:
          PyObject_HEAD
          AttributeSource object;
          static PyObject *wrap_Object(const AttributeSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
